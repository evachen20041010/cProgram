#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define STU_NUM 8
#define COLS    4
// 欄位意義：0:座號  1:國文  2:數學  3:總成績

void ScoreInput(int iScore[STU_NUM][COLS]);
void ScorePrint(const int iScore[STU_NUM][COLS]);

// 輔助：清空輸入緩衝（避免殘留換行造成 scanf 問題）
void flushInput(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { /* skip */ }
}

int main(void)
{
    int iScore[STU_NUM][COLS] = { 0 };
    int choice;

    // 初始化座號（亦可由輸入流程設定）
    for (int i = 0; i < STU_NUM; ++i) {
        iScore[i][0] = i + 1;
    }

    while (1) {
        printf("\n選擇 1:輸入成績  2:輸出成績  3:結束執行\n");
        printf("請選擇：");
        if (scanf("%d", &choice) != 1) {
            printf("輸入錯誤，請重新選擇。\n");
            flushInput();
            continue;
        }

        if (choice == 1) {
            ScoreInput(iScore);
        }
        else if (choice == 2) {
            ScorePrint(iScore);
        }
        else if (choice == 3) {
            printf("程式結束\n");
            break;
        }
        else {
            printf("無效選項，請重新選擇。\n");
        }
    }

    printf("按下任意鍵繼續 . . .\n");
    flushInput();
    getchar(); // 等待鍵盤
    return 0;
}

void ScoreInput(int iScore[STU_NUM][COLS])
{
    int subChoice;
    while (1) {
        printf("\n選擇 1:輸入座號  2:輸入國文成績  3:輸入數學成績  4:結束輸入\n");
        printf("請選擇：");
        if (scanf("%d", &subChoice) != 1) {
            printf("輸入錯誤，請重新選擇。\n");
            flushInput();
            continue;
        }

        if (subChoice == 1) {
            // 輸入 8 位同學的座號（每筆以空白間隔）
            printf("請依序輸入 8 個座號，每個座號請以空白間隔開\n");
            for (int i = 0; i < STU_NUM; ++i) {
                int seat;
                if (scanf("%d", &seat) != 1) {
                    printf("座號輸入錯誤。\n");
                    flushInput();
                    --i; // 重複讀取該筆
                    continue;
                }
                if (seat < 1 || seat > STU_NUM) {
                    printf("座號必須介於 1～%d，請重新輸入該筆。\n", STU_NUM);
                    --i;
                    continue;
                }
                iScore[i][0] = seat;
            }
        }
        else if (subChoice == 2) {
            // 輸入國文成績
            printf("請依序輸入 8 位學生的國文成績，每筆以空白間隔開\n");
            for (int i = 0; i < STU_NUM; ++i) {
                int ch;
                if (scanf("%d", &ch) != 1) {
                    printf("國文成績輸入錯誤。\n");
                    flushInput();
                    --i;
                    continue;
                }
                if (ch < 0 || ch > 100) {
                    printf("國文成績必須介於 0～100，請重新輸入該筆。\n");
                    --i;
                    continue;
                }
                iScore[i][1] = ch;
                // 若數學已有值，順便更新總分
                if (iScore[i][2] >= 0) {
                    iScore[i][3] = iScore[i][1] + iScore[i][2];
                }
            }
        }
        else if (subChoice == 3) {
            // 輸入數學成績
            printf("請依序輸入 8 位學生的數學成績，每筆以空白間隔開\n");
            for (int i = 0; i < STU_NUM; ++i) {
                int math;
                if (scanf("%d", &math) != 1) {
                    printf("數學成績輸入錯誤。\n");
                    flushInput();
                    --i;
                    continue;
                }
                if (math < 0 || math > 100) {
                    printf("數學成績必須介於 0～100，請重新輸入該筆。\n");
                    --i;
                    continue;
                }
                iScore[i][2] = math;
                // 若國文已有值，順便更新總分
                if (iScore[i][1] >= 0) {
                    iScore[i][3] = iScore[i][1] + iScore[i][2];
                }
            }
        }
        else if (subChoice == 4) {
            // 結束輸入：統一重新計算總分，確保一致
            for (int i = 0; i < STU_NUM; ++i) {
                iScore[i][3] = iScore[i][1] + iScore[i][2];
            }
            printf("回到主選單\n");
            break;
        }
        else {
            printf("無效選項，請重新選擇。\n");
        }
    }
}

void ScorePrint(const int iScore[STU_NUM][COLS])
{
    printf("\n座號\t國文成績\t數學成績\t總成績\n");
    for (int i = 0; i < STU_NUM; ++i) {
        printf("%06d\t%3d\t\t%3d\t\t%3d\n",
            iScore[i][0], iScore[i][1], iScore[i][2], iScore[i][3]);
    }
}
