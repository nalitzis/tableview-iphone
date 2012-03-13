//
//  TSTEViewController.h
//  testtableview
//
//  Created by Adolfo Bulfoni on 3/12/12.
//  
//

#import <UIKit/UIKit.h>

@interface TSTEViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>{
    NSMutableArray *_list;
}

@property(nonatomic, strong) IBOutlet UITableView *tableView;

@end
