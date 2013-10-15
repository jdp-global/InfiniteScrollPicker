//
//  InfiniteScrollPicker.h
//  InfiniteScrollPickerExample
//
//  Created by Philip Yu on 6/6/13.
//  Copyright (c) 2013 Philip Yu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PRTween.h"


@class InfiniteScrollPicker;

@interface InfiniteScrollPicker : UIScrollView<UIScrollViewDelegate>
{
    PRTweenOperation *activeTweenOperation;
    NSMutableArray *imageStore;
    bool snapping;
    float lastSnappingX;
}

@property (nonatomic, strong) NSArray *imageAry;
@property (nonatomic) CGSize itemSize;
@property (nonatomic) float alphaOfobjs;

@property (nonatomic) float heightOffset;
@property (nonatomic) float positionRatio;

- (void)initInfiniteScrollView;


@end
