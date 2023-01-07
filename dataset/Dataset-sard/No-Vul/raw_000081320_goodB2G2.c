static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    switch(6)
    {
    case 6:
    {
        
        size_t VAR4 = wcslen(VAR1);
        wchar_t * VAR5 = FUN2(VAR6);
        
        if (VAR5 != NULL)
        {
            
            wcsncat(VAR1+VAR4, VAR5, 100-VAR4-1);
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
        FUN4(VAR1, VAR1);
        break;
    default:
        
        FUN3("");
        break;
    }
}