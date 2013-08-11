//
//  DetailViewController.h
//  TestNavigation
//
//  Created by Daniel Hahn on 8/11/13.
//  Copyright (c) 2013 StarkWeather. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
