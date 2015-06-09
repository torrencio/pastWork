//
//  APPViewController.m
//  camera test
//
//  Created by torrencio Vigilante on 2014-05-11.
//  Copyright (c) 2014 Appcoda. All rights reserved.
//

#import "APPViewController.h"

@interface APPViewController ()

@end

@implementation APPViewController
- (IBAction)TakePhoto{
    if ([UIImagePickerController
         isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera] == NO)
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
                                                        message:@"Camera Unavailable"
                                                       delegate:self
                                              cancelButtonTitle:@"Cancel"
                                              otherButtonTitles:nil, nil];
        [alert show];
        return;
    }
    picker=[[UIImagePickerController alloc] init];
    picker.delegate = self;
    [picker setSourceType:(UIImagePickerControllerSourceTypeCamera)];
     [self presentViewController:picker animated:YES completion:NULL];
    
     
     
}
     - (IBAction)ChooseExisting{
         picker2=[[UIImagePickerController alloc] init];
         picker2.delegate = self;
         [picker2 setSourceType:(UIImagePickerControllerSourceTypePhotoLibrary)];
          [self presentViewController:picker2 animated:YES completion:NULL];
         
          
          
          }
- (void) imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info{
    image = [info objectForKey:UIImagePickerControllerOriginalImage];
    [imageView setImage:image];
    [self dismissViewControllerAnimated:YES completion:NULL];
    
}
-(void)imagePickerControllerDidCancel:(UIImagePickerController *)picker{
    [self dismissViewControllerAnimated:YES completion:NULL];
}


     
     

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
