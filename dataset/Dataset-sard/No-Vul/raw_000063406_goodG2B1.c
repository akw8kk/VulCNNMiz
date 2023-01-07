static void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
        break;
    }
    {
        char VAR4[10+1] = VAR5;
        
        
        strncpy(VAR1, VAR4, strlen(VAR4) + 1);
        FUN2(VAR1);
    }
}