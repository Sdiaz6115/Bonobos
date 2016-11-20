//
//  LoadingImageView.h
//  Bonobos
//
//  Created by Steven Diaz on 11/19/16.
//  Copyright © 2016 Steven Diaz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoadingImageView : UIView

- (void)setImage:(UIImage *)image;
- (void)setImageURL:(NSURL *)url;

@end
