/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface AVAudioRecorder : NSObject 
{
    void *_impl;
}

@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property <AVAudioRecorderDelegate> *delegate;
@property(readonly) double currentTime;
@property(readonly) NSDictionary *settings;
@property(readonly) NSURL *url;
@property(getter=isRecording,readonly) BOOL recording;


- (BOOL)isRecording;
- (BOOL)record;
- (double)currentTime;
- (void)finalize;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)url;
- (void)beginInterruption;
- (void)finishedRecording;
- (void)baseInitFailed;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (id)settings;
- (BOOL)prepareToRecord;
- (BOOL)recordForDuration:(double)arg1;
- (BOOL)deleteRecording;
- (BOOL)isMeteringEnabled;
- (void)setMeteringEnabled:(BOOL)arg1;
- (float)peakPowerForChannel:(NSUInteger)arg1;
- (float)averagePowerForChannel:(NSUInteger)arg1;
- (void)endInterruption;
- (struct AudioRecorderImpl { id x1; id x2; id x3; id x4; NSUInteger x5; struct AudioStreamBasicDescription { double x_6_1_1; NSUInteger x_6_1_2; NSUInteger x_6_1_3; NSUInteger x_6_1_4; NSUInteger x_6_1_5; NSUInteger x_6_1_6; NSUInteger x_6_1_7; NSUInteger x_6_1_8; NSUInteger x_6_1_9; } x6; struct OpaqueAudioFileID {} *x7; struct OpaqueAudioQueue {} *x8; long long x9; long long x10; long long x11; double x12; double x13; double x14; NSUInteger x15; char *x16; NSUInteger x17; struct AudioFormatListItem {} *x18; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; struct AudioQueueLevelMeterState {} *x26; struct AudioQueueBuffer {} *x27[4]; struct AudioQueueBuffer {} *x28; void*x29; NSUInteger x30; void*x31; }*)impl;
     /* Encoded args for previous method: ^{AudioRecorderImpl=@@@@I{AudioStreamBasicDescription=dIIIIIIII}^{OpaqueAudioFileID}^{OpaqueAudioQueue}qqqdddI*I^{AudioFormatListItem}BBBBBBB^{AudioQueueLevelMeterState}[4^{AudioQueueBuffer}]^{AudioQueueBuffer}BIB}8@0:4 */

- (id)baseInit;
- (void)endInterruptionWithFlags;
- (void)privCommonCleanup;
- (void)updateMeters;
- (void)stop;
- (void)pause;

@end