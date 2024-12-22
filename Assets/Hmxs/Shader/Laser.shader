Shader "Hmxs/Laser"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_Color("Color", Color) = (1,1,1,1)
		_Concentrate("Concentrate", Range(1, 30)) = 2
		_CenterConcentrate("CenterConcentrate", Range(0, 1)) = 0
		_Luminance("Luminance", Range(0, 1)) = 0
	}
	SubShader
	{
		Tags
		{
			"RenderType"="Transparent"
			"Queue"="Transparent"
			"RenderPipeline" = "UniversalPipeline"
			"IgnoreProjector"="True"
		}
		LOD 100

		Pass
		{
			Blend SrcAlpha One
			Cull Off
			ZWrite Off

			HLSLPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

			struct Attributes
			{
				float4 position : POSITION;
				float2 texcoord : TEXCOORD0;
			};

			struct Varyings
			{
				float4 position : SV_POSITION;
				float2 texcoord : TEXCOORD0;
			};

			TEXTURE2D(_MainTex);
			SAMPLER(sampler_MainTex);
			float4 _Color;
			float _Concentrate;
			float _CenterConcentrate;
			float _Luminance;

			Varyings vert(Attributes v)
			{
				Varyings o;
				o.position = TransformObjectToHClip(v.position.xyz);
				o.texcoord = v.texcoord;
				return o;
			}

			half4 frag(Varyings i) : SV_Target
			{
				half4 color = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.texcoord) * _Color;
				half baseAlpha = -4 * i.texcoord.y * i.texcoord.y + 4 * i.texcoord.y;
				half alpha = pow(baseAlpha, _Concentrate);
				color.rgb += lerp(0, _Luminance, step(_CenterConcentrate, alpha));
				return half4(color.rgb, alpha);
			}
			ENDHLSL
		}
	}
}
