/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASContext, ASPolicyManager, ASTask, NSError, NSMutableArray, NSString;

@interface ASTaskManager : NSObject <ASPolicyManagerDelegate> {
    ASTask *_activeTask;
    BOOL _checkingVersion;
    ASContext *_context;
    NSString *_easProtocolVersion;
    BOOL _haveWarnedAboutCert;
    NSMutableArray *_heldExclusiveTasks;
    NSMutableArray *_heldIndependentTasks;
    NSMutableArray *_heldTasks;
    BOOL _holdingTasks;
    NSMutableArray *_independentTasks;
    ASPolicyManager *_policyManager;
    NSMutableArray *_queuedExclusiveTasks;
    NSMutableArray *_queuedTasks;
    BOOL _requestedPolicyUpdate;
    BOOL _runningExclusiveTasks;
    BOOL _serverIs2007OrLater;
    NSError *_versionError;
}

@property(readonly) BOOL serverIs2007OrLater; /* unknown property attribute: V_serverIs2007OrLater */

- (void)_clearTask:(id)arg1;
- (id)_deviceIDPrefix;
- (id)_deviceType;
- (void)_enqueueTask:(id)arg1 overridingHold:(BOOL)arg2;
- (void)_executeIndependentTask:(id)arg1;
- (void)_executeNextTaskIfIdle;
- (void)_executeTask:(id)arg1;
- (void)_finishAllTasksWithError:(id)arg1;
- (void)_holdTasks;
- (id)_model;
- (void)_populateVersionDescriptions;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_runEASVersionTask;
- (void)_runNextExclusiveTask;
- (void)_tryToLoadSerialNumber;
- (void)_unholdExclusiveTasksOnly;
- (void)_unholdTasks;
- (BOOL)_useFakeDescriptions;
- (id)_userAgent;
- (id)_version;
- (id)accountID;
- (id)activeTask;
- (id)allTasks;
- (BOOL)allowAnyRootCert;
- (NSInteger)allowAnyRootCertFromHost:(id)arg1;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1;
- (void)cancelTaskWithID:(NSInteger)arg1;
- (void)dealloc;
- (id)deviceID;
- (id)deviceType;
- (id)easProtocolVersion;
- (void)enqueueTask:(id)arg1;
- (void)finishTask:(id)arg1 withError:(id)arg2;
- (void)getOptionsTask:(id)arg1 completedWithStatus:(NSInteger)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5;
- (id)initWithContext:(id)arg1 policyManager:(id)arg2;
- (id)password;
- (id)policyKey;
- (id)policyManager;
- (void)policyManagerUpdatedPolicy:(id)arg1;
- (NSInteger)port;
- (id)queuedTasks;
- (void)refreshPolicyKeyWhileHoldingTask:(id)arg1;
- (void)resetCertWarnings;
- (void)runExclusiveTask:(id)arg1 movingToFront:(BOOL)arg2;
- (void)runExclusiveTask:(id)arg1;
- (void)runIndependentTask:(id)arg1;
- (id)server;
- (BOOL)serverIs2007OrLater;
- (void)setAllowAnyRootCert:(BOOL)arg1 fromHost:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setEASProtocolVersion:(id)arg1;
- (id)stateString;
- (id)tag;
- (void)taskDidFinish:(id)arg1;
- (BOOL)useSSL;
- (id)user;
- (id)userAgent;

@end