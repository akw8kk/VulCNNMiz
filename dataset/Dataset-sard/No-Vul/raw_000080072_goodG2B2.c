static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
        
        strcpy(VAR1, "");
        break;
    default:
        
        FUN2("");
        break;
    }
    switch(7)
    {
    case 7:
    {
        char VAR3[100] = "";
        
        FUN3(VAR3, 100-1, VAR1);
        FUN2(VAR3);
    }
    break;
    default:
        
        FUN2("");
        break;
    }
}