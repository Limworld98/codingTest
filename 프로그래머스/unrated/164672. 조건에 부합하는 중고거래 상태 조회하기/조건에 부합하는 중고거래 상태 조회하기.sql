-- 코드를 입력하세요
SELECT i.board_id,i.writer_id,i.title,i.price,(case when i.status = 'sale' then '판매중' 
                                               when i.status = 'reserved' then '예약중' 
                                               when i.status = 'done' then '거래완료' end) 
                                               as status from used_goods_board as i
where i.created_date like '2022-10-05'
order by i.board_id desc;