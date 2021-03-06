//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSInspectorChildController.h"
#import "MSInspectorSection.h"
#import "MSSliceLayerWatcher.h"

@class MSFlippedView, MSInspectorStackView, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer;

@interface MSBaseExportableInspectorViewController : NSViewController <MSSliceLayerWatcher, MSInspectorSection, MSInspectorChildController>
{
    MSInspectorStackView *_stackView;
    NSArray *_layers;
    NSTimer *_refreshTimer;
    NSMutableArray *_sliceViews;
    NSMutableSet *_sliceViewPool;
    MSFlippedView *_sliceViewContainerView;
}

@property(retain, nonatomic) MSFlippedView *sliceViewContainerView; // @synthesize sliceViewContainerView=_sliceViewContainerView;
@property(retain, nonatomic) NSMutableSet *sliceViewPool; // @synthesize sliceViewPool=_sliceViewPool;
@property(retain, nonatomic) NSMutableArray *sliceViews; // @synthesize sliceViews=_sliceViews;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) MSInspectorStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)sizeSliceView;
- (void)reloadSlicesFromArray:(id)arg1;
- (id)sliceViewWithRect:(struct CGRect)arg1;
- (void)removeAllSliceViews;
- (void)loadSliceViews;
- (void)refreshTimerFired:(id)arg1;
- (void)scheduleSliceViewReload;
- (void)refreshAction:(id)arg1;
- (id)document;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (void)layerPositionPossiblyChanged;
- (id)previewContainerView;
- (BOOL)shouldHideExportBar;
- (id)views;
- (void)sliceLayerDidChange:(id)arg1;
- (void)prepareForDisplay;
- (void)selectionDidChangeTo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

