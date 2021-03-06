//
//  CategoryTableViewCell.h
//  Bonobos
//
//  Created by Steven Diaz on 11/16/16.
//  Copyright © 2016 Steven Diaz. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSInteger const CategoryCellImageHeight;
extern NSInteger const CategoryCellSubCategoryCellHeight;
extern NSInteger const CategoryCellFooterHeight;

@class CategoryModel, CategoryTableViewCell;

@protocol CategoryTableViewCellDelegate <NSObject>

/**
 *  Called when a subCategory on a CategoryTableViewCell is selected.
 *
 *  @param cell The cell who owns the subCategory that was selected.
 *
 *  @param category The subCategory that was selected.
 */
- (void)categoryTableViewCell:(CategoryTableViewCell *)cell didSelectCategory:(CategoryModel *)category;

@end

@class CategoryModel;

@interface CategoryTableViewCell : UITableViewCell

@property (nonatomic, strong) CategoryModel *categoryModel;
@property (nonatomic, weak) id<CategoryTableViewCellDelegate> delegate;

@end
