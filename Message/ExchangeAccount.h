/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "IMAPAccount.h"


@interface ExchangeAccount : IMAPAccount {
}
// inherited: +(id)accountTypeString;
+(BOOL)usingActiveDirectory;
// inherited: -(Class)connectionClass;
-(BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
-(BOOL)storeDraftsOnServer;
-(BOOL)storeSentMessagesOnServer;
// inherited: -(BOOL)shouldExpungeMessagesOnDelete;
-(id)_defaultSpecialMailboxNameForType:(int)type;
// inherited: -(void)filterMailboxList:(id)list forMailbox:(id)mailbox options:(int)options;
-(void)_filterMailboxList:(id)list forMailboxWithPath:(id)path iisServer:(id)server;
// inherited: -(void)handleOpenMailboxError:(id)error;
@end

