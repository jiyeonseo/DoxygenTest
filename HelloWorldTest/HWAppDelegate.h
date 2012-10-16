/**
 @mainpage HelloWorldTest
 @section 소개
 - 소개 : Doxygen 테스트를 위한 예제입니다.
 @section HelloWorld
 - 프로그램명 : HelloWorld
 - 프로그램내용 : Doxygen 이용방법
 @section 작성정보
 - 작성자  : 서지연
 - 작성일  : 2012-10-15
 @date 2012-10-15
 @section 수정정보
 - 수정일/수정자 : 수정내역test
 - 2012.10.11/서지연 : test용 수정1
 */

#import <UIKit/UIKit.h>

@class HWViewController;

@interface HWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) HWViewController *viewController;

@end
