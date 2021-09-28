//
//  GlkFileRefProtocol.h
//  CocoaGlk
//
//  Created by Andrew Hunter on 28/03/2005.
//  Copyright 2005 Andrew Hunter. All rights reserved.
//

#import "GlkStreamProtocol.h"

///
/// Describes a fileref (mainly used for communicating files between the process and the server)
///
@protocol GlkFileRef

/// Creates a read only stream from this fileref
- (byref NSObject<GlkStream>*) createReadOnlyStream;
/// Creates a write only stream from this fileref
- (byref NSObject<GlkStream>*) createWriteOnlyStream;
/// Creates a read/write stream from this fileref
- (byref NSObject<GlkStream>*) createReadWriteStream;

/// Deletes the file associated with this fileref
- (void) deleteFile;
/// Returns \c YES if the file associated with this fileref exists
- (BOOL) fileExists;
/// Whether or not the stream should be buffered in autoflush mode
- (BOOL) autoflushStream;
/// Sets whether or not this stream should be autoflushed
- (void) setAutoflush: (BOOL) autoflush;

@end
