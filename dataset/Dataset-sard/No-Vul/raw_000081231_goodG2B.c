static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[100] = VAR5"";
    VAR1 = VAR4;
    {
        wchar_t * VAR1 = *VAR2;
        
        wcscpy(VAR1, VAR5"");
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR6[100] = VAR5"";
            
            FUN2(VAR6, 100-1, VAR1);
            FUN3(VAR6);
        }
    }
}