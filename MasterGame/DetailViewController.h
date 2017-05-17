//
//  DetailViewController.h
//  MasterGame
//
//  Created by Vishwan Aranha - Administrative Account on 5/17/17.
//  Copyright © 2017 Vishwan Aranha - Administrative Account. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

