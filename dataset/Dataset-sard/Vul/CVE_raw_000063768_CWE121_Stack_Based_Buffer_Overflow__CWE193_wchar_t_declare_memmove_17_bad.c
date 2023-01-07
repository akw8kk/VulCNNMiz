void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[10];
    wchar_t VAR4[10+1];
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
        VAR2[0] = VAR5''; 
    }
    {
        wchar_t VAR6[10+1] = VAR7;
        
        
        memmove(VAR2, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
        FUN2(VAR2);
    }
}