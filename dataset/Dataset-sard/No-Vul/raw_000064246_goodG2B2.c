static void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    switch(6)
    {
    case 6:
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        strncpy(VAR1, VAR4, 100-1);
        VAR1[100-1] = ''; 
        FUN2(VAR1);
    }
}