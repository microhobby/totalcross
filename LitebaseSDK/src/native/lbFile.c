/*********************************************************************************
 *  TotalCross Software Development Kit                                          *
 *  Copyright (C) 2000-2012 SuperWaba Ltda.                                      *
 *  Copyright (C) 2012-2020 TotalCross Global Mobile Platform Ltda.   
 *  All Rights Reserved                                                          *
 *                                                                               *
 *  This library and virtual machine is distributed in the hope that it will     *
 *  be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                         *
 *                                                                               *
 *  This file is covered by the GNU LESSER GENERAL PUBLIC LICENSE VERSION 2.1    *
 *  A copy of this license is located in file license.txt at the root of this    *
 *  SDK or can be downloaded here:                                               *
 *  http://www.gnu.org/licenses/lgpl-2.1.txt                                     *
 *                                                                               *
 *********************************************************************************/

/**
 * This module defines useful functions for other Litebase modules.
 */

#include "lbFile.h"

#if defined WIN32
   #include "win/File_c.h"
#else
   #include "posix/File_c.h"
#endif

Err lbfileCreate(NATIVE_FILE* fref, TCHARP path, int32 mode)
{
   return fileCreate(fref, path, mode, null);
}
Err lbfileClose(NATIVE_FILE* fref)
{
   return fileClose(fref);
}
Err lbfileCreateDir(TCHARP path)
{
   return fileCreateDir(path, -1);
}
Err lbfileDelete(NATIVE_FILE* fref, TCHARP path, bool isOpen)
{
   return fileDelete(fref, path, -1, isOpen);
}
bool lbfileExists(TCHARP path)
{                                              
   return fileExists(path, -1);
}
Err lbfileGetSize(NATIVE_FILE fref, TCHARP szPath, int32* size)
{                                
   return fileGetSize(fref, szPath, size);
}
Err lbfileReadBytes(NATIVE_FILE fref, CharP bytes, int32 offset, int32 length, int32* bytesRead)
{                                         
   return fileReadBytes(fref, bytes, offset, length, bytesRead);
}
Err lbfileRename(NATIVE_FILE fref, TCHARP currPath, TCHARP newPath, bool isOpen)
{                                                              
   return fileRename(fref, -1, currPath, newPath, isOpen);
}
Err lbfileSetPos(NATIVE_FILE fref, int32 position)
{                                                           
   return fileSetPos(fref, position);
}
Err lbfileWriteBytes(NATIVE_FILE fref, CharP bytes, int32 offset, int32 length, int32* bytesWritten)
{                                    
   return fileWriteBytes(fref, bytes, offset, length, bytesWritten);
}
Err lbfileSetSize(NATIVE_FILE* fref, int32 newSize)
{                                                                   
   return fileSetSize(fref, newSize);
}
Err lbfileFlush(NATIVE_FILE fref)
{                                    
   return fileFlush(fref);
}
