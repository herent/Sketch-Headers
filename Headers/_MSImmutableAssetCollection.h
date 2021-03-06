//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class MSImmutableArray, MSImmutableArray<MSArray>, MSImmutableImageCollection, MSImmutableImageCollection<MSImageCollection>;

@interface _MSImmutableAssetCollection : MSImmutableModelObject
{
    MSImmutableArray *_images;
    MSImmutableArray *_colors;
    MSImmutableArray *_gradients;
    MSImmutableImageCollection *_imageCollection;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableImageCollection<MSImageCollection> *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) MSImmutableArray<MSArray> *gradients; // @synthesize gradients=_gradients;
@property(retain, nonatomic) MSImmutableArray<MSArray> *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) MSImmutableArray *images; // @synthesize images=_images;
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
- (id)imageCollectionGeneric;
- (id)gradientsGeneric;
- (id)colorsGeneric;
- (id)imagesGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

