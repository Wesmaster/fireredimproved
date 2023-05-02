#ifndef GUARD_LIST_MENU_H
#define GUARD_LIST_MENU_H

#include "global.h"
#include "window.h"

#define LIST_NOTHING_CHOSEN -1
#define LIST_CANCEL -2
#define LIST_HEADER -3

#define LIST_NO_MULTIPLE_SCROLL     0
#define LIST_MULTIPLE_SCROLL_DPAD   1
#define LIST_MULTIPLE_SCROLL_L_R    2

enum
{
    SCROLL_ARROW_LEFT,
    SCROLL_ARROW_RIGHT,
    SCROLL_ARROW_UP,
    SCROLL_ARROW_DOWN,
};

struct ListMenuItem
{
    const u8 *label;
    u32 index;
};

struct ListMenu;

// For ListMenuGet/SetTemplateField
enum ListMenuFields
{
    LISTFIELD_MOVECURSORFUNC = 0,
    LISTFIELD_MOVECURSORFUNC2,
    LISTFIELD_TOTALITEMS,
    LISTFIELD_MAXSHOWED,
    LISTFIELD_WINDOWID,
    LISTFIELD_HEADERX,
    LISTFIELD_ITEMX,
    LISTFIELD_CURSORX,
    LISTFIELD_UPTEXTY,
    LISTFIELD_CURSORPAL,
    LISTFIELD_FILLVALUE,
    LISTFIELD_CURSORSHADOWPAL,
    LISTFIELD_LETTERSPACING,
    LISTFIELD_ITEMVERTICALPADDING,
    LISTFIELD_SCROLLMULTIPLE,
    LISTFIELD_FONTID,
    LISTFIELD_CURSORKIND,
};

struct ListMenuTemplate
{
    /*0x00*/ const struct ListMenuItem *items;
    /*0x04*/ void (* moveCursorFunc)(s32 itemIndex, bool8 onInit, struct ListMenu *list);
    /*0x08*/ void (* itemPrintFunc)(u8 windowId, u32 itemId, u8 y);
    /*0x0C*/ u16 totalItems;
    /*0x0E*/ u16 maxShowed;
    /*0x10*/ u8 windowId;
    /*0x11*/ u8 header_X;
    /*0x12*/ u8 item_X;
    /*0x13*/ u8 cursor_X;
    /*0x14*/ u8 upText_Y:4; // x1, x2, x4, x8 = xF
             u8 cursorPal:4; // x10, x20, x40, x80 = xF0
    /*0x15*/ u8 fillValue:4; // x1, x2, x4, x8 = xF
             u8 cursorShadowPal:4; // x10, x20, x40, x80 = xF0
    /*0x16*/ u8 lettersSpacing:3;
             u8 itemVerticalPadding:3;
             u8 scrollMultiple:2; // x40, x80 = xC0
    /*0x17*/ u8 fontId:6; // x1, x2, x4, x8, x10, x20 = x3F
             u8 cursorKind:2; // x40, x80
}; /* size = 0x18 */

struct ListMenu
{
    struct ListMenuTemplate template;
    u16 cursorPos;
    u16 itemsAbove;
    u8 unk_1C;
    u8 unk_1D;
    u8 taskId;
    u8 unk_1F;
};

struct ListMenuWindowRect
{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    u8 palNum;
};

const struct MoveMenuInfoIcon gMoveMenuInfoIcons[] =
{
    { 12, 12, 0x00 },       // Unused
    { 32, 12, 0x20 },       // Normal icon
    { 32, 12, 0x64 },       // Fight icon
    { 32, 12, 0x60 },       // Flying icon
    { 32, 12, 0x80 },       // Poison icon
    { 32, 12, 0x48 },       // Ground icon
    { 32, 12, 0x44 },       // Rock icon
    { 32, 12, 0x6C },       // Bug icon
    { 32, 12, 0x68 },       // Ghost icon
    { 32, 12, 0x88 },       // Steel icon
    { 32, 12, 0xA4 },       // ??? (Mystery) icon
    { 32, 12, 0x24 },       // Fire icon
    { 32, 12, 0x28 },       // Water icon
    { 32, 12, 0x2C },       // Grass icon
    { 32, 12, 0x40 },       // Electric icon
    { 32, 12, 0x84 },       // Psychic icon
    { 32, 12, 0x4C },       // Ice icon
    { 32, 12, 0xA0 },       // Dragon icon
    { 32, 12, 0xC0 },       // Fairy icon
    { 40, 12, 0xAB },       // -Type- icon
    { 40, 12, 0xC6 },       // -Power- icon
    { 40, 12, 0xCB },       // -Accuracy- icon
    { 40, 12, 0xE6 },       // -PP- icon
    { 40, 12, 0xEB },       // -Effect- icon
    { 32, 16, 0x04 },       // Physical icon
    { 32, 16, 0x08 },       // Special icon
    { 32, 16, 0x0C },       // Status icon
};

extern struct ListMenuTemplate gMultiuseListMenuTemplate;

u32 DoMysteryGiftListMenu(const struct WindowTemplate *windowTemplate, const struct ListMenuTemplate *listMenuTemplate, u8 arg2, u16 tileNum, u16 palNum);
u8 ListMenuInit(const struct ListMenuTemplate *listMenuTemplate, u16 cursorPos, u16 itemsAbove);
u8 ListMenuInitInRect(const struct ListMenuTemplate *listMenuTemplate, const struct ListMenuWindowRect *rect, u16 cursorPos, u16 itemsAbove);
s32 ListMenu_ProcessInput(u8 listTaskId);
void DestroyListMenuTask(u8 listTaskId, u16 *cursorPos, u16 *itemsAbove);
void RedrawListMenu(u8 listTaskId);
void ListMenuGetScrollAndRow(u8 listTaskId, u16 *cursorPos, u16 *itemsAbove);
u16 ListMenuGetYCoordForPrintingArrowCursor(u8 listTaskId);
void ListMenuOverrideSetColors(u8 cursorPal, u8 fillValue, u8 cursorShadowPal);
void ListMenuDefaultCursorMoveFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);
void ListMenuSetTemplateField(u8 taskId, u8 field, s32 value);

#endif //GUARD_LIST_MENU_H
