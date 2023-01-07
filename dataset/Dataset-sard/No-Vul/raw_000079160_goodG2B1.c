static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        strcpy(VAR1, "");
        break;
    }
    switch(7)
    {
    case 7:
        
        FUN3(VAR1);
        break;
    default:
        
        FUN2("");
        break;
    }
}