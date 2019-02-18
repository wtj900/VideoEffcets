//
//  SRCRenderTypes.h
//  MetalShaderDesigner
//
//  Created by suruochang on 2018/10/19.
//  Copyright © 2018年 suruochang. All rights reserved.
//

#ifndef SRCRenderTypes_h
#define SRCRenderTypes_h

#import <simd/vector_types.h>

typedef struct
{
    // Positions in pixel space (i.e. a value of 100 indicates 100 pixels from the origin/center)
    vector_float2 position;
    
    // 2D texture coordinate
    vector_float2 textureCoordinate;
} SRCVertex;


typedef enum {
    SRCPlanarY = 0,
    SRCPlanarU = 1,
    SRCPlanarV = 2,
} SRCPlanarIndex;

#endif /* SRCRenderTypes_h */
