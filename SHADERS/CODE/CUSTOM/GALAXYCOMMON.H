////////////////////////////////////////////////////////////////////////////////
///
///     @file       GalaxyCommon.h
///     @author     User
///     @date       
///
///     @brief      GalaxyCommon
///
///     Copyright (c) 2015 Hello Games Ltd. All Rights Reserved.
///
////////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
//      Compilation defines 


//-----------------------------------------------------------------------------
//      Include files

#include "Common/Defines.shader.h"


struct TracingFsFxUniforms
{
  mat4    gWorldViewProjectionMat4;
 
  vec4    gTraceOrigin;
  vec4    gTraceDir;

  vec4    gTracePDX;
  vec4    gTracePDY;
  vec4    gTraceScreenCenter;

  vec4    gGoalCenterDir;
  vec4    gGoalCenterPerpU;
  vec4    gGoalCenterPerpV;

  vec4    gAnoStreakConfig1;
  vec4    gAnoStreakConfig2;
  vec4    gAnoStreakConfig3;

  vec4    gGalacticScale;
  vec4    gInterest;
  vec4    gTiming;
  
  vec4    gScreen;
  vec4    gOriginSS;
};


struct FsMapUniforms
{
  vec4    gSunCoreConfig;
  vec4    gSunCoreColour;

  vec4    gBGCellConfig;
  vec4    gBGColourScales;
  vec4    gBGColourConfig;
  vec4    gBGLensFlareColour;
  vec4    gBGLensFlareSpread;
  
  vec4    gNebulaeStepRange_AlphaPow;
  vec4    gCompositeControlBVCG;
  vec4    gNebulaeTraceConfig;
  vec4    gVignetteLensFlareConfig;

  SAMPLER2D( gNebulaeMap );
  SAMPLER2D( gAtmosMap );
  SAMPLER2D( gNoiseMap );
};


struct ColourPalettes
{
  vec4    gLargeAreaPrimaryLUT[10];
  vec4    gLargeAreaSecondaryLUT[10];
};

struct UniformBuffer
{
     DECLARE_PTR( TracingFsFxUniforms,  mpTracingUniformsPerMesh )
     DECLARE_PTR( FsMapUniforms,        mpFsMapUniformsPerMesh   )
     DECLARE_PTR( ColourPalettes,       mpColourPalettesPerMesh  )
};

#ifndef M_PI
#define M_PI 3.141592653589793
#endif