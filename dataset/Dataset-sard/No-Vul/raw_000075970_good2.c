static void FUN1()
{
    if(VAR1==5)
    {
        {
            wchar_t VAR2[150], VAR3[100];
            
            wmemset(VAR2, VAR4'', 149);
            VAR2[149] = VAR4'';
            memcpy(VAR3, VAR2, 99*sizeof(wchar_t));
            VAR3[99] = VAR4''; 
            FUN2(VAR3);
        }
    }
}