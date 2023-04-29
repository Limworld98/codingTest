-- 코드를 입력하세요
SELECT i.board_id,i.writer_id,i.title,i.price,(case when i.status = 'SALE' then '판매중'
                                              when i.status = 'RESERVED' then '예약중'
                                               when i.status = 'DONE' then '거래완료'
                                              
                                               end)as status from used_goods_board i
where date_format(i.created_date,'%Y-%m-%d') like '2022-10-05'
order by i.board_id desc;