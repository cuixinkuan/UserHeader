//
//  UserHeaderView.h
//  UserHeader
//
//  Created by admin on 15/11/30.
//  Copyright © 2015年 CXK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserHeaderView : UIView
@property (nonatomic,strong)UIScrollView * scrollView;
@property (nonatomic,copy)void (^imgActionBlock)();

- (id)initWithFrame:(CGRect)frame backgroundImage:(NSString *)backgroundName headerImageURL:(NSString *)headerImageURL titlt:(NSString *)title subTitle:(NSString *)subTitle;

- (void)updateSubViewsWithScrollOffset:(CGPoint)newOffset;





@end
