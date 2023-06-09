////////////////////////////////////////////////////////////////////////////////
///
///     @file       CloudCommon.h
///     @author     User
///     @date       
///
///     @brief      CloudCommon
///
///     Copyright (c) 2008 Hello Games Ltd. All Rights Reserved.
///
////////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
//      Compilation defines 


//-----------------------------------------------------------------------------
//      Include files

#include "Common/Defines.shader.h"

//-----------------------------------------------------------------------------
///
///     CustomPerMeshUniforms
///
///     @brief      CustomPerMeshUniforms
///
///     Stuff that is only used for these types of meshes.
//-----------------------------------------------------------------------------
struct CustomPerMeshUniforms
{
    SAMPLER2D( gBufferMap );
    SAMPLER2D( gDepthMap );    
    SAMPLER2D( gCloudDepthMap );    
	SAMPLER2D( gNoiseMap );
	
    vec4 gCloudColourExternalVec4;
    vec4 gCloudColourInternalVec4;
    vec4 gCloudRatioVec4;
    vec4 gCloudParamsVec4;
    vec4 gHueOverlayParamsVec4;
    vec4 gValueOverlayParamsVec4;
};


//
// This is the SRT buffer that everything gets uploaded to (on PS4). PC just functions as normal.
//
struct UniformBuffer
{
     DECLARE_PTR( PerFrameUniforms,             mpPerFrame )       /*: PER_MESH*/
     DECLARE_PTR( CustomPerMeshUniforms,        mpCustomPerMesh )       /*: PER_MESH*/
     DECLARE_PTR( CommonPerMeshUniforms,        mpCommonPerMesh )       /*: PER_MESH*/
};
