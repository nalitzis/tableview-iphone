//
//  TSTEViewController.h
//  testtableview
//
//  Created by Adolfo Bulfoni on 3/12/12.
//  Copyright (c) 2012 H-Art. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TSTEViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>{
    NSMutableArray *_list;
}

@property(nonatomic, strong) IBOutlet UITableView *tableView;

@end
