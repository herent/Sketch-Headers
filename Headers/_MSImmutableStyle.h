//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class MSImmutableArray, MSImmutableArray<MSArray>, MSImmutableGraphicsContextSettings, MSImmutableGraphicsContextSettings<MSGraphicsContextSettings>, MSImmutableStyleBlur, MSImmutableStyleBlur<MSStyleBlur>, MSImmutableStyleBorderOptions, MSImmutableStyleBorderOptions<MSStyleBorderOptions>, MSImmutableStyleColorControls, MSImmutableStyleColorControls<MSStyleColorControls>, MSImmutableStyleReflection, MSImmutableStyleReflection<MSStyleReflection>, MSImmutableTextStyle, MSImmutableTextStyle<MSTextStyle>, NSString;

@interface _MSImmutableStyle : MSImmutableModelObject
{
    unsigned long long _endDecorationType;
    long long _miterLimit;
    NSString *_sharedObjectID;
    unsigned long long _startDecorationType;
    MSImmutableStyleBlur *_blur;
    MSImmutableStyleBorderOptions *_borderOptions;
    MSImmutableArray *_borders;
    MSImmutableStyleColorControls *_colorControls;
    MSImmutableGraphicsContextSettings *_contextSettings;
    MSImmutableArray *_fills;
    MSImmutableArray *_innerShadows;
    MSImmutableStyleReflection *_reflection;
    MSImmutableArray *_shadows;
    MSImmutableTextStyle *_textStyle;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableTextStyle<MSTextStyle> *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) MSImmutableArray<MSArray> *shadows; // @synthesize shadows=_shadows;
@property(retain, nonatomic) MSImmutableStyleReflection<MSStyleReflection> *reflection; // @synthesize reflection=_reflection;
@property(retain, nonatomic) MSImmutableArray<MSArray> *innerShadows; // @synthesize innerShadows=_innerShadows;
@property(retain, nonatomic) MSImmutableArray<MSArray> *fills; // @synthesize fills=_fills;
@property(retain, nonatomic) MSImmutableGraphicsContextSettings<MSGraphicsContextSettings> *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSImmutableStyleColorControls<MSStyleColorControls> *colorControls; // @synthesize colorControls=_colorControls;
@property(retain, nonatomic) MSImmutableArray<MSArray> *borders; // @synthesize borders=_borders;
@property(retain, nonatomic) MSImmutableStyleBorderOptions<MSStyleBorderOptions> *borderOptions; // @synthesize borderOptions=_borderOptions;
@property(retain, nonatomic) MSImmutableStyleBlur<MSStyleBlur> *blur; // @synthesize blur=_blur;
@property(nonatomic) unsigned long long startDecorationType; // @synthesize startDecorationType=_startDecorationType;
@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(nonatomic) long long miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) unsigned long long endDecorationType; // @synthesize endDecorationType=_endDecorationType;
- (void).cxx_destruct;
- (id)keyPathsDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)textStyleGeneric;
- (id)shadowsGeneric;
- (id)reflectionGeneric;
- (id)innerShadowsGeneric;
- (id)fillsGeneric;
- (id)contextSettingsGeneric;
- (id)colorControlsGeneric;
- (id)bordersGeneric;
- (id)borderOptionsGeneric;
- (id)blurGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

