static void FUN1()
{
    char * VAR1;
    char VAR2[100] = "";
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
    {
        
        size_t VAR3 = strlen(VAR1);
        char * VAR4 = FUN2(VAR5);
        
        if (VAR4 != NULL)
        {
            
            strncat(VAR1+VAR3, VAR4, 100-VAR3-1);
        }
    }
    break;
    default:
        
        FUN3("");
        break;
    }
    switch(7)
    {
    case 7:
        
        FUN4("", VAR1);
        break;
    default:
        
        FUN3("");
        break;
    }
}