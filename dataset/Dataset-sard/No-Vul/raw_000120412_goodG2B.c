static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[100] = VAR5"";
    VAR1 = VAR4;
    {
        wchar_t * VAR1 = *VAR2;
        
        wcscat(VAR1, VAR5"");
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        
        
        FUN2(VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
    }
}