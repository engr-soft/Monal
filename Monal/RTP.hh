//
//  RTP.h
//  Monal
//
//  Created by Anurodh Pokharel on 8/28/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>


@interface RTP : NSObject 
{
    BOOL disconnecting; 
  
}


#define NUM_BUFFERS 200
// 2 byte (16 bit)  8000 khz

#define NUM_BUFFERS_REC 500


-(int) RTPConnect:(NSString*) IP:(int) destPort:(int) localPort;
-(void) RTPDisconnect;
-(void) listenThread;

@end
