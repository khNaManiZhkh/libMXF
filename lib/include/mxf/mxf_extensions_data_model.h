/*
 * $Id: mxf_extensions_data_model.h,v 1.3 2010/06/02 10:59:20 philipn Exp $
 *
 * Copyright (C) 2009  British Broadcasting Corporation.
 * All Rights Reserved.
 *
 * Author: Philip de Nier
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 */
 

/* Note: defines are undefined at the end of the file, unless KEEP_DATA_MODEL_DEFS defined */


#if !defined (MXF_BASIC_TYPE_DEF)
#define MXF_BASIC_TYPE_DEF(typeId, name, size)
#endif
#if !defined (MXF_ARRAY_TYPE_DEF)
#define MXF_ARRAY_TYPE_DEF(typeId, name, elementTypeId, fixedSize)
#endif
#if !defined (MXF_COMPOUND_TYPE_DEF)
#define MXF_COMPOUND_TYPE_DEF(typeId, name)
#endif
#if !defined (MXF_COMPOUND_TYPE_MEMBER)
#define MXF_COMPOUND_TYPE_MEMBER(memberName, memberTypeId)
#endif
#if !defined (MXF_INTERPRETED_TYPE_DEF)
#define MXF_INTERPRETED_TYPE_DEF(typeId, name, interpretedTypeId, fixedSize)
#endif

#if !defined (MXF_LABEL)
#define MXF_LABEL(d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15)
#endif
#if !defined (MXF_SET_DEFINITION)
#define MXF_SET_DEFINITION(parentName, name, label)
#endif
#if !defined (MXF_ITEM_DEFINITION)
#define MXF_ITEM_DEFINITION(setName, name, label, localTag, typeId, isRequired)
#endif




MXF_SET_DEFINITION(StructuralComponent, Filler,
    MXF_LABEL(0x06,0x0e,0x2b,0x34,0x02,0x53,0x01,0x01,0x0d,0x01,0x01,0x01,0x01,0x01,0x09,0x00)
);


MXF_ITEM_DEFINITION(GenericPackage, UserComments,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x02, 0x01, 0x02, 0x0c, 0x00, 0x00, 0x00),
    0x4406,
    MXF_STRONGREFARRAY_TYPE,
    0
);


MXF_SET_DEFINITION(InterchangeObject, TaggedValue,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x3f, 0x00)
);

    MXF_ITEM_DEFINITION(TaggedValue, Name,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x02, 0x01, 0x02, 0x09, 0x01, 0x00, 0x00),
        0x5001,
        MXF_UTF16STRING_TYPE,
        1
    );

    MXF_ITEM_DEFINITION(TaggedValue, Value,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x03, 0x02, 0x01, 0x02, 0x0a, 0x01, 0x00, 0x00),
        0x5003,
        MXF_INDIRECT_TYPE,
        1
    );


MXF_SET_DEFINITION(StructuralComponent, EssenceGroup,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x00)
);

    MXF_ITEM_DEFINITION(EssenceGroup, Choices,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x06, 0x01, 0x00, 0x00),
        0x0501,
        MXF_STRONGREFBATCH_TYPE,
        1
    );
    MXF_ITEM_DEFINITION(EssenceGroup, StillFrame,
        MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0x02, 0x06, 0x01, 0x01, 0x04, 0x02, 0x08, 0x00, 0x00),
        0x0502,
        MXF_STRONGREF_TYPE,
        0
    );


MXF_SET_DEFINITION(GenericDescriptor, PhysicalDescriptor,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x49, 0x00)
);

MXF_SET_DEFINITION(PhysicalDescriptor, TapeDescriptor,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x2e, 0x00)
);

MXF_SET_DEFINITION(PhysicalDescriptor, ImportDescriptor,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x4a, 0x00)
);

MXF_SET_DEFINITION(PhysicalDescriptor, RecordingDescriptor,
    MXF_LABEL(0x06, 0x0e, 0x2b, 0x34, 0x02, 0x53, 0x01, 0x01, 0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x4b, 0x00)
);




#if !defined(KEEP_DATA_MODEL_DEFS)
#undef MXF_BASIC_TYPE_DEF
#undef MXF_ARRAY_TYPE_DEF
#undef MXF_COMPOUND_TYPE_DEF
#undef MXF_COMPOUND_TYPE_MEMBER
#undef MXF_INTERPRETED_TYPE_DEF
#undef MXF_LABEL
#undef MXF_SET_DEFINITION
#undef MXF_ITEM_DEFINITION
#endif

