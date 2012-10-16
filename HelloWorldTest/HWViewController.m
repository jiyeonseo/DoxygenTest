/**
 @file HWViewController.m
 @date 2012/10/16
 @author 홍길동(hong@uangel.com)
 @brief HelloWorldViewController 의 소스
 */
#define NUMBER 1 /**<NUMBER 정해주기. */
#import "HWViewController.h"

@interface HWViewController ()

-(void)saveStrings:(NSString *)words;

@end

@implementation HWViewController

@synthesize testArray, testString, testMutableString;
@synthesize inputTestField, outputTextField;


- (void)viewDidLoad
{
    [super viewDidLoad];
	testMutableString = [NSMutableString stringWithCapacity:40]; }

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];

}



/** @brief 
 */
- (void)viewDidUnload {

    [self setOutputTextField:nil];
    [self setInputTestField:nil];
    [super viewDidUnload];
}

/**@brief 입력된 값을 mutableString에 더해준다.
 *@param words : 입력받은 값.
 */
-(void)saveStrings:(NSString *)words{
    
    [testMutableString appendString:words];
    
}


/** @brief 입력된 변수를 Textfield에 출력해 준다.
 @remark 이때 입력된 String을 MutableString에 더해준다.
 */
- (IBAction)clickButton:(id)sender {
    
    testString = inputTestField.text; 
    [self saveStrings:testString];
    inputTestField.text= @"";
    outputTextField.text = testString;
    
}

/** @brief MutableString값에 저장된 모든 string 값을 출력해준다.
 */
- (IBAction)printAll:(id)sender {
    outputTextField.text = testMutableString;
}


@end
