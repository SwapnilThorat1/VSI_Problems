#include"Header.h"


int main()
{
  PNODE first = NULL;
  int iRet = 0;

  InsertFirst(&first,"MARS",38,6.794);
  InsertFirst(&first,"EARTH",100,12.756);
  InsertFirst(&first,"VENUS",91,12.104);
  InsertFirst(&first,"SUN",27072,1.3927);

  InsertLast(&first,"NEPTUNE",119,49.532);
  InsertLast(&first,"URANUS",92,51.118);
  InsertLast(&first,"SATURN",106,108.72);
  InsertLast(&first,"JUPITER",234,142.982);
  
  printf("\n****************************************************************************");
  Display(first);
  printf("****************************************************************************\n");

  iRet = Heaviest_Planet(first);
  printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
  printf("Heaviest planet of solar system is:  %d\n",iRet); 
  printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n"); 

  ListSortAsc_weight(&first);
  printf("\n-------------------------------------------------------------------\n");
  printf(" After sorting  the planets ascending the weight linked list is => \n");
  printf("-------------------------------------------------------------------\n");
 
  printf("\n****************************************************************************");
  Display(first);
  printf("****************************************************************************\n");

  ListSortDec_weight(&first);
  printf("-------------------------------------------------------------------\n");
  printf(" After sorting planets descending the weight of linked list is  => \n");
  printf("-------------------------------------------------------------------\n");
  
  printf("\n****************************************************************************");
  Display(first);
  printf("****************************************************************************\n");

  ListSortAsc_size(&first);
  printf("----------------------------------------------------------------\n");
  printf(" After sorting planets ascending the size of linked list is  => \n");
  printf("----------------------------------------------------------------\n");
  
  printf("\n****************************************************************************");
  Display(first);
  printf("****************************************************************************\n");

  ListSortDec_size(&first);
  printf("--------------------------------------------------------------------\n");
  printf(" After sorting planets descending the size of linked list is   =>   \n");
  printf("--------------------------------------------------------------------\n");
  
  printf("\n****************************************************************************");
  Display(first);
  printf("****************************************************************************\n");

  return 0;
}

/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/ ///
//         OUTPUT:  ==>                                                                                                                                                                                                     //
//                                                                                                                                                                                                                          //
//      ****************************************************************************                                                                                                                                        //
//      |SUN,27072,1.392700 | ->|VENUS,91,12.104000 | ->|EARTH,100,12.756000 | ->|MARS,38,6.794000 | ->|NEPTUNE,119,49.532001 | ->|URANUS,92,51.118000 | ->|SATURN,106,108.720001 | ->|JUPITER,234,142.981995 | ->NULL      //
//      ****************************************************************************                                                                                                                                        //
//      >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                                                                                                                                                                   //
//      Heaviest planet of solar system is:  27072                                                                                                                                                                          // 
//      <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<                                                                                                                                                                   //
//                                                                                                                                                                                                                          //
//       -------------------------------------------------------------------                                                                                                                                                //
//       After sorting  the planets ascending the weight linked list is =>                                                                                                                                                  //
//       -------------------------------------------------------------------                                                                                                                                                //
//                                                                                                                                                                                                                          //
//       ****************************************************************************                                                                                                                                       //
//       |MARS,38,6.794000 | ->|VENUS,91,12.104000 | ->|URANUS,92,51.118000 | ->|EARTH,100,12.756000 | ->|SATURN,106,108.720001 | ->|NEPTUNE,119,49.532001 | ->|JUPITER,234,142.981995 | ->|SUN,27072,1.392700 | ->NULL     //
//       ****************************************************************************                                                                                                                                       //
//       -------------------------------------------------------------------                                                                                                                                                //
//       After sorting planets descending the weight of linked list is  =>                                                                                                                                                  //
//       -------------------------------------------------------------------                                                                                                                                                //
//                                                                                                                                                                                                                          //
//       ****************************************************************************                                                                                                                                       //
//       |SUN,27072,1.392700 | ->|JUPITER,234,142.981995 | ->|NEPTUNE,119,49.532001 | ->|SATURN,106,108.720001 | ->|EARTH,100,12.756000 | ->|URANUS,92,51.118000                                                            //
//       | ->|VENUS,91,12.104000 | ->|MARS,38,6.794000 | ->NULL                                                                                                                                                             //
//       ****************************************************************************                                                                                                                                       //
//       ----------------------------------------------------------------                                                                                                                                                   //
//       After sorting planets ascending the size of linked list is  =>                                                                                                                                                     //
//       ----------------------------------------------------------------                                                                                                                                                   //
//                                                                                                                                                                                                                          //
//       ****************************************************************************                                                                                                                                       //
//       |SUN,27072,1.392700 | ->|MARS,38,6.794000 | ->|VENUS,91,12.104000 | ->|EARTH,100,12.756000 | ->|NEPTUNE,119,49.532001 | ->|URANUS,92,51.118000 | ->|SATURN,106,108.720001 | ->|JUPITER,234,142.981995 | ->NULL     //
//       ****************************************************************************                                                                                                                                       //
//       --------------------------------------------------------------------                                                                                                                                               //
//       After sorting planets descending the size of linked list is   =>                                                                                                                                                   //
//       --------------------------------------------------------------------                                                                                                                                               //
//                                                                                                                                                                                                                          //
//        ****************************************************************************                                                                                                                                      //
//        |SUN,27072,1.392700 | ->|MARS,38,6.794000 | ->|VENUS,91,12.104000 | ->|EARTH,100,12.756000 | ->|NEPTUNE,119,49.532001 | ->|URANUS,92,51.118000 | ->|SATURN,106,108.720001 | ->|JUPITER,234,142.981995 | ->NULL    //
//        ****************************************************************************                                                                                                                                      //
//                                                                                                                                                                                                                          //
/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/