//
//
//      _|          _|_|_|
//      _|        _|
//      _|        _|
//      _|        _|
//      _|_|_|_|    _|_|_|
//
//
//  Copyright (c) 2014-2015, Licheng Guo. ( http://nsobject.me )
//  http://github.com/titman
//
//
//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//

#import <Cocoa/Cocoa.h>
#import "MagnetTableView.h"
#import <WebKit/WebKit.h>
#import "DragImageView.h"

@interface BTItem : NSObject

@property(nonatomic, strong) NSString * href;
@property(nonatomic, strong) NSString * title;
@property(nonatomic, strong) NSArray * files;
@property(nonatomic, strong) NSString * size;
@property(nonatomic, strong) NSString * fileCount;
@property(nonatomic, strong) NSString * date;
@property(nonatomic, strong) NSString * magnet;

@end

@interface ViewController : NSViewController

@property(nonatomic, strong) IBOutlet MagnetTableView * tableView;
@property(nonatomic, strong) IBOutlet NSTextField * textField;
@property(nonatomic, strong) IBOutlet NSTextField * tip;
@property(nonatomic, strong) IBOutlet DragImageView * dragImageView;

@end

