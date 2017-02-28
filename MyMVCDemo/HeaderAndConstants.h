
#ifndef MVCDemo_HeaderAndConstants_h
#define MVCDemo_HeaderAndConstants_h

//------------ Screen Size ------------------------ //
#define screenSize [UIScreen mainScreen].bounds
#define screenWidth screenSize.size.width
#define screenHeight screenSize.size.height

//----------------- Class Shared Instance ----------//
#define theAppDelegate  ((AppDelegate *)[[UIApplication sharedApplication] delegate])

//-----------------    Font Declarations Here  ----------//

//------------------ Color Codes ------------------ //
#define vnColorHeader [UIColor colorWithRed:67.0/255.0 green:120.0/255.0 blue:177.0/255.0 alpha:1];

//------------- Messages -------------//
#define connectionErrorMsg @"The Internet connection to be offline."

//----- Service Request Strings ------//
#define GET_Method @"GET"
#define POST_Method @"POST"
#define base_URL @""
#define vBase_URL @""
#define ImgBase_URL @""

/*_asyProfileImg=[[AsyncImageView alloc]init];
 _asyProfileImg.backgroundColor = [UIColor clearColor];
 [_asyProfileImg loadImageFromURL:[NSURL URLWithString:strImg]];
 _asyProfileImg.contentMode=UIViewContentModeScaleAspectFit;
 _asyProfileImg.layer.masksToBounds=YES;
 _asyProfileImg.layer.cornerRadius =_asyProfileImg.frame.size.width / 2;
 _asyProfileImg.clipsToBounds = YES;
 [self.view bringSubviewToFront:_asyProfileImg];
 [self.view addSubview:_asyProfileImg];
 
 [_asyProfBlur loadImageFromURL:[NSURL URLWithString:strImg]];
*/
#endif
