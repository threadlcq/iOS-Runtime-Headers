/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASEvent;

@interface ASEventChangeCommand : ASSyncTaskCommand {
    ASEvent *_event;
}

- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)dealloc;
- (id)event;
- (id)initWithEvent:(id)arg1;
- (id)serverID;

@end