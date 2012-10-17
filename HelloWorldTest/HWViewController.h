/**
 @file HWViewController.h
 @date 2012/10/16
 @author 홍길동(hong@uangel.com)
 @brief HelloWorld ViewController의 헤더.
 */

#import <UIKit/UIKit.h>
/**<define에서 주석다는 방법 */
#define TEMP_FILE "TEMP_FILE" 

@interface HWViewController : UIViewController
{
    ///test를 위한 String값.
    NSString *testString;
    ///test를 위한 Array값.
    NSMutableArray *testArray;
    ///test를 위한 MutableString값.
    NSMutableString *testMutableString;
}
@property (nonatomic,strong) NSMutableString *testMutableString;

@property (nonatomic,strong) NSString *testString;
///만약 여기다가 다른 값을 넣는다면?-> 다음줄로 더 들어감
@property (nonatomic,strong) NSMutableArray *testArray;
///입력받는 TextField.
@property (strong, nonatomic) IBOutlet UITextField *inputTestField;
///출력하는 TextField.
@property (strong, nonatomic) IBOutlet UITextField *outputTextField;


- (IBAction)clickButton:(id)sender;
- (IBAction)printAll:(id)sender;
- (void)saveStrings:(NSString *)words;

@end
