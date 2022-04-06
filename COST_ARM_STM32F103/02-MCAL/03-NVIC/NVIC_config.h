/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  NVIC                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 16/1/2022                                            */
/**************************************************************************/

#ifndef   NVIC_CONFIG_H 
#define   NVIC_CONFIG_H
/*number of GROUP PRIORITY  AND SUB PRIORITY for bit         //number  probability of group and sub group can access
 optain that :1- GROUP_4_SUB_0                               1-  GROUP = 15    , SUB = 0
              2- GROUP_3_SUB_1                               2-  GROUP = 8     , SUB = 2
              3- GROUP_2_SUB_2                               3-  GROUP = 4     , SUB = 4
              4- GROUP_1_SUB_3                               4-  GROUP = 2     , SUB = 9
              5- GROUP_0_SUB_4                               5-  GROUP = 0     , SUB = 15   */

#define    NUMBER_OF_GROUP_SUB      GROUP_2_SUB_2





#endif 
