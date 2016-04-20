//
//  STPAddressFieldTableViewCell.h
//  Stripe
//
//  Created by Ben Guo on 4/13/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STPAddressFieldViewModel, STPFormTextField, STPAddressFieldTableViewCell;

@protocol STPAddressFieldTableViewCellDelegate <NSObject>

- (void)addressFieldTableViewCellDidUpdateText:(STPAddressFieldTableViewCell *)cell;
- (void)addressFieldTableViewCellDidReturn:(STPAddressFieldTableViewCell *)cell;

@end

@interface STPAddressFieldTableViewCell : UITableViewCell

- (void)configureWithViewModel:(STPAddressFieldViewModel *)viewModel delegate:(id <STPAddressFieldTableViewCellDelegate>)delegate;

@end