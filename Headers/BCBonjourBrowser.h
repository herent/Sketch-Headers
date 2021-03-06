//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"

@class NSNetServiceBrowser, NSString;

@interface BCBonjourBrowser : NSObject <NSNetServiceBrowserDelegate>
{
    CDUnknownBlockType _foundAction;
    CDUnknownBlockType _removedAction;
    NSNetServiceBrowser *_browser;
}

@property(retain, nonatomic) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(copy, nonatomic) CDUnknownBlockType removedAction; // @synthesize removedAction=_removedAction;
@property(copy, nonatomic) CDUnknownBlockType foundAction; // @synthesize foundAction=_foundAction;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

