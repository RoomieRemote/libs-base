/* Interface for GNU Objective C stdio stream
   Copyright (C) 1994, 1995, 1996 Free Software Foundation, Inc.
   
   Written by:  Andrew Kachites McCallum <mccallum@gnu.ai.mit.edu>
   Date: July 1994
   
   This file is part of the Gnustep Base Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.
   
   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   */ 

#ifndef __StdioStream_h__GNUSTEP_BASE_INCLUDE
#define __StdioStream_h__GNUSTEP_BASE_INCLUDE

#include <gnustep/base/preface.h>
#include <gnustep/base/Stream.h>
#include <stdio.h>

@interface StdioStream : Stream
{
  int mode;
  FILE *fp;
}

+ standardIn;
+ standardOut;
+ standardError;

+ streamWithFilename: (id <String>)name fmode: (const char *)m;
/* xxx Add the others too. */

- initWithFilePointer: (FILE*)afp fmode: (const char *)m;
- initWithFilename: (id <String>)name fmode: (const char *)m;
- initWithFileDescriptor: (int)fd fmode: (const char *)m;

- initWithPipeTo: (id <String>)systemCommand;
- initWithPipeFrom: (id <String>)systemCommand;

@end

#endif /* __StdioStream_h__GNUSTEP_BASE_INCLUDE */

