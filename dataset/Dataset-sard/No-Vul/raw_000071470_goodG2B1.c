static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = (char *)malloc(100*sizeof(char));
        VAR1[0] = ''; 
        break;
    }
    {
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        FUN3(VAR1, 100, "", VAR2);
        FUN2(VAR1);
        free(VAR1);
    }
}