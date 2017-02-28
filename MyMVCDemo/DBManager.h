
#import <Foundation/Foundation.h>
#import <sqlite3.h>
#import <UIKit/UIKit.h>

@interface DBManager : NSObject
{
NSString *databasePath;
}

+(DBManager*)getSharedInstance;
+(BOOL)closeDB;
-(BOOL)createDB;
-(BOOL)createTableWithQuery:(NSString*)query;
-(BOOL) insertDataWithQuery:(NSString*)query;

-(NSArray*)selectTableDataWithQuery:(NSString*)query;
-(BOOL)deleteFromTableWithQuery:(NSString*)query;
-(BOOL)updateDataWithQuery:(NSString *)query;

@end
