#ifndef xrRender_consoleH
#define xrRender_consoleH
#pragma once

// Common
extern ENGINE_API int ps_r__Supersample;
extern ECORE_API int ps_r__LightSleepFrames;

extern ECORE_API float ps_r__Detail_l_ambient;
extern ECORE_API float ps_r__Detail_l_aniso;
extern ECORE_API float ps_r__Detail_density;

extern ECORE_API float ps_r__Tree_w_rot;
extern ECORE_API float ps_r__Tree_w_speed;
extern ECORE_API float ps_r__Tree_w_amp;
extern ECORE_API float ps_r__Tree_SBC;		// scale bias correct
extern ECORE_API Fvector ps_r__Tree_Wave;

extern ECORE_API float ps_r__WallmarkTTL;
extern ECORE_API float ps_r__WallmarkSHIFT;
extern ECORE_API float ps_r__WallmarkSHIFT_V;

extern ECORE_API float ps_r__GLOD_ssa_start;
extern ECORE_API float ps_r__GLOD_ssa_end;
extern ECORE_API float ps_r__LOD;
//.extern ECORE_API	float ps_r__LOD_Power;
extern ECORE_API float ps_r__ssaDISCARD;
extern ECORE_API float ps_r__ssaDONTSORT;
extern ECORE_API float ps_r__ssaHZBvsTEX;
extern ECORE_API int ps_r__tf_Anisotropic;
extern ECORE_API int ps_r__GlowsPerFrame;

// R1
extern ECORE_API float ps_r1_ssaLOD_A;
extern ECORE_API float ps_r1_ssaLOD_B;
extern ECORE_API float ps_r1_tf_Mipbias;
extern ECORE_API float ps_r1_lmodel_lerp;
extern ECORE_API float ps_r1_dlights_clip;
extern ECORE_API float ps_r1_pps_u;
extern ECORE_API float ps_r1_pps_v;

// R1-specific
extern ECORE_API Flags32 ps_r1_flags;			// r1-only
enum
{
	R1FLAG_DLIGHTS = (1 << 0),
};

// R2
extern ECORE_API float ps_r2_ssaLOD_A;
extern ECORE_API float ps_r2_ssaLOD_B;
extern ECORE_API float ps_r2_tf_Mipbias;

// R2-specific
extern ECORE_API Flags32 ps_r2_ls_flags;
extern ECORE_API float ps_r2_df_parallax_range;
extern ECORE_API float ps_r2_gmaterial;
extern ECORE_API float ps_r2_tonemap_middlegray;
extern ECORE_API float ps_r2_tonemap_adaptation;
extern ECORE_API float ps_r2_tonemap_low_lum;
extern ECORE_API float ps_r2_tonemap_amount;
extern ECORE_API float ps_r2_ls_bloom_kernel_scale;
extern ECORE_API float ps_r2_ls_bloom_kernel_g;
extern ECORE_API float ps_r2_ls_bloom_kernel_b;
extern ECORE_API float ps_r2_ls_bloom_threshold;
extern ECORE_API float ps_r2_ls_bloom_speed;
extern ECORE_API float ps_r2_ls_dsm_kernel;
extern ECORE_API float ps_r2_ls_psm_kernel;
extern ECORE_API float ps_r2_ls_ssm_kernel;
extern ECORE_API Fvector ps_r2_aa_barier;
extern ECORE_API Fvector ps_r2_aa_weight;
extern ECORE_API float ps_r2_aa_kernel;
extern ECORE_API float ps_r2_mblur;
extern ECORE_API int ps_r2_GI_depth;
extern ECORE_API int ps_r2_GI_photons;
extern ECORE_API float ps_r2_GI_clip;
extern ECORE_API float ps_r2_GI_refl;
extern ECORE_API float ps_r2_ls_depth_scale;
extern ECORE_API float ps_r2_ls_depth_bias;
extern ECORE_API float ps_r2_ls_squality;
extern ECORE_API float ps_r2_sun_near;
extern ECORE_API float ps_r2_sun_near_border;
extern ECORE_API float ps_r2_sun_tsm_projection;
extern ECORE_API float ps_r2_sun_tsm_bias;
extern ECORE_API float ps_r2_sun_depth_far_scale;
extern ECORE_API float ps_r2_sun_depth_far_bias;
extern ECORE_API float ps_r2_sun_depth_near_scale;
extern ECORE_API float ps_r2_sun_depth_near_bias;
extern ECORE_API float ps_r2_sun_lumscale;
extern ECORE_API float ps_r2_sun_lumscale_hemi;
extern ECORE_API float ps_r2_sun_lumscale_amb;
extern ECORE_API float ps_r2_zfill;

extern ECORE_API float ps_r2_dhemi_scale;
extern ECORE_API int ps_r2_dhemi_count;
extern ECORE_API float ps_r2_slight_fade;
extern ECORE_API int ps_r2_wait_sleep;

enum
{
	R2FLAG_SUN = (1 << 0),
	R2FLAG_SUN_FOCUS = (1 << 1),
	R2FLAG_SUN_TSM = (1 << 2),
	R2FLAG_SUN_DETAILS = (1 << 3),
	R2FLAG_TONEMAP = (1 << 4),
	R2FLAG_AA = (1 << 5),
	R2FLAG_GI = (1 << 6),
	R2FLAG_FASTBLOOM = (1 << 7),
	R2FLAG_GLOBALMATERIAL = (1 << 8),
	R2FLAG_ZFILL = (1 << 9),
	R2FLAG_R1LIGHTS = (1 << 10),
	R2FLAG_SUN_IGNORE_PORTALS = (1 << 11),

	R2FLAG_SUN_STATIC = (1 << 12),

	R2FLAG_EXP_SPLIT_SCENE = (1 << 13),
	R2FLAG_EXP_DONT_TEST_UNSHADOWED = (1 << 14),

	R2FLAG_USE_NVDBT = (1 << 15),
	R2FLAG_USE_NVSTENCIL = (1 << 16),

	R2FLAG_EXP_MT_CALC = (1 << 17),
};

extern void xrRender_initconsole();
extern BOOL xrRender_test_hw();
extern void xrRender_apply_tf();
#endif
