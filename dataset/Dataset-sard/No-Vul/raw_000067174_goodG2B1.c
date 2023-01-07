static void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
        break;
    }
    {
        char VAR3[50] = "";
        
        strcat(VAR3, VAR1);
        FUN2(VAR1);
    }
}